/*
 * Harbour 3.4.6hernad (07f191a83b) (2019-03-16 17:22)
 * GNU C 9.0.1 (64-bit)
 * Generated C source from "../../../fptcdx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FPTCDX_GETFUNCTABLE );
HB_FUNC_EXTERN( USRRDD_GETFUNCTABLE );
HB_FUNC_INIT( FPTCDX_INIT );
HB_FUNC_EXTERN( RDDREGISTER );
HB_FUNC_EXTERN( RDDINFO );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC( FPTCDX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FPTCDX )
{ "FPTCDX_GETFUNCTABLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FPTCDX_GETFUNCTABLE )}, NULL },
{ "USRRDD_GETFUNCTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( USRRDD_GETFUNCTABLE )}, NULL },
{ "FPTCDX_INIT$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( FPTCDX_INIT )}, NULL },
{ "RDDREGISTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDREGISTER )}, NULL },
{ "RDDINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDINFO )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "FPTCDX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FPTCDX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FPTCDX, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FPTCDX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FPTCDX )
   #include "hbiniseg.h"
#endif

HB_FUNC( FPTCDX_GETFUNCTABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,1,0,95,1,95,2,95,3,95,4,
		106,7,68,66,70,67,68,88,0,4,0,0,95,5,
		20,7,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( FPTCDX_INIT )
{
	static const HB_BYTE pcode[] =
	{
		176,3,0,106,7,70,80,84,67,68,88,0,122,20,
		2,176,4,0,92,14,92,2,106,7,70,80,84,67,
		68,88,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FPTCDX )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

