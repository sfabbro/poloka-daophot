# -*- mode: python -*- 


import os
import os.path as op
import commands

from waflib.Errors import ConfigurationError


def get_out_name():
    """
    Generate an (architecture dependant) 
    build directory name.
    """
    ret = os.uname()
    out_name = 'build.'+ ret[0]+'-'+ret[-1]
    return op.join('build', out_name)


def get_out_name_afs():
    """
    Generate an architecture-dependant output file, 
    using the AFS 'fs' tool.
    """
    
    ret = None
    
    try: 
        ret = commands.getstatusoutput('fs sys')
        if ret[0] != 0: 
            os.remove('core')
            raise ConfigurationError()
    except:
        raise ConfigurationError('unable to run fs sys')
    
    at_sys_name = ret.split("'")[-2]
    out_name = 'build.' + at_sys_name
    
    return op.join('build', out_name)
        

    
    
