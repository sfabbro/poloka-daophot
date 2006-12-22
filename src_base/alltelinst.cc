 /* Automatically generated by make from ../telinst/cfh12k.cc ../telinst/cfhtmos.cc ../telinst/ctio1p5.cc ../telinst/ctiobtc.cc ../telinst/ctiomos2.cc ../telinst/esodanish.cc ../telinst/hstacs.cc ../telinst/hstwfpc2.cc ../telinst/intwfc.cc ../telinst/jkt.cc ../telinst/keckIIesi.cc ../telinst/keckIlris.cc ../telinst/kpnot1ka.cc ../telinst/lick1m.cc ../telinst/megacam.cc ../telinst/not.cc ../telinst/nttsusi.cc ../telinst/skymaker.cc ../telinst/swarp.cc ../telinst/tng.cc ../telinst/vltfors.cc ../telinst/vltisaac.cc ../telinst/whtwfc.cc ../telinst/wiyns2kb.cc ../telinst/yaloandicam.cc */
 /* makefile at the end of fitstoad.cc */
#include "../telinst/cfh12k.cc"
#include "../telinst/cfhtmos.cc"
#include "../telinst/ctio1p5.cc"
#include "../telinst/ctiobtc.cc"
#include "../telinst/ctiomos2.cc"
#include "../telinst/esodanish.cc"
#include "../telinst/hstacs.cc"
#include "../telinst/hstwfpc2.cc"
#include "../telinst/intwfc.cc"
#include "../telinst/jkt.cc"
#include "../telinst/keckIIesi.cc"
#include "../telinst/keckIlris.cc"
#include "../telinst/kpnot1ka.cc"
#include "../telinst/lick1m.cc"
#include "../telinst/megacam.cc"
#include "../telinst/not.cc"
#include "../telinst/nttsusi.cc"
#include "../telinst/skymaker.cc"
#include "../telinst/swarp.cc"
#include "../telinst/tng.cc"
#include "../telinst/vltfors.cc"
#include "../telinst/vltisaac.cc"
#include "../telinst/whtwfc.cc"
#include "../telinst/wiyns2kb.cc"
#include "../telinst/yaloandicam.cc"
#ifndef USE_WCS
static AcceptorType AcceptorsArray [] = {
&Cfht12K::Acceptor,
&CfhtMos::Acceptor,
&Ctio1p5mSite2K6::Acceptor,
&Ctio1p5mTek1K2::Acceptor,
&CtioBtc::Acceptor,
&CtioMosaic2::Acceptor,
&DanishDfosc::Acceptor,
&HstACS::Acceptor,
&HstWfpc2::Acceptor,
&IntWfc::Acceptor,
&JktTek1::Acceptor,
&JktSit1::Acceptor,
&JktSit2::Acceptor,
&KeckIIesi::Acceptor,
&KeckILris::Acceptor,
&Kpno2p1mT1ka::Acceptor,
&Lick1mDewar5::Acceptor,
&Lick1mDewar5_large::Acceptor,
&Lick1mDewar2::Acceptor,
&Megacam::Acceptor,
&NotAlfoscFasu::Acceptor,
&NttSusi::Acceptor,
&SkyMaker::Acceptor,
&Swarp::Acceptor,
&TngLrs::Acceptor,
&VltFors::Acceptor,
&VltIsaac::Acceptor,
&WhtWfc::Acceptor,
&WiynS2kb::Acceptor,
&YaloAndicam::Acceptor,
&Unknown::Acceptor};
/* instanciation of templates IsOfKind */
template bool IsOfKind<Cfht12K>(const FitsHeader &);
template bool IsOfKind<Int4Wfc>(const FitsHeader &);
template bool IsOfKind<IntWfcNewDaq>(const FitsHeader &);
template bool IsOfKind<Megacam>(const FitsHeader &);
#endif
