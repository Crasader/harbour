/*
 * Harbour 3.4.6hernad (07f191a83b) (2019-03-16 17:22)
 * GNU C 9.0.1 (64-bit)
 * Generated C source from "../../../logrdd.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_STATIC( LOGRDD_INIT );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( HB_USERNAME );
HB_FUNC_EXTERN( USRRDD_RDDDATA );
HB_FUNC_STATIC( LOGRDD_EXIT );
HB_FUNC_EXTERN( HB_VFCLOSE );
HB_FUNC_STATIC( LOGRDD_CREATE );
HB_FUNC_EXTERN( UR_SUPER_CREATE );
HB_FUNC_STATIC( TOLOG );
HB_FUNC_STATIC( LOGRDD_CREATEFIELDS );
HB_FUNC_EXTERN( UR_SUPER_CREATEFIELDS );
HB_FUNC_STATIC( LOGRDD_OPEN );
HB_FUNC_EXTERN( UR_SUPER_OPEN );
HB_FUNC_STATIC( LOGRDD_CLOSE );
HB_FUNC_EXTERN( DBINFO );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( UR_SUPER_CLOSE );
HB_FUNC_STATIC( LOGRDD_APPEND );
HB_FUNC_EXTERN( UR_SUPER_APPEND );
HB_FUNC_STATIC( LOGRDD_DELETE );
HB_FUNC_EXTERN( UR_SUPER_DELETE );
HB_FUNC_STATIC( LOGRDD_RECALL );
HB_FUNC_EXTERN( UR_SUPER_RECALL );
HB_FUNC_STATIC( LOGRDD_PUTVALUE );
HB_FUNC_EXTERN( FIELDGET );
HB_FUNC_EXTERN( UR_SUPER_PUTVALUE );
HB_FUNC_STATIC( LOGRDD_ZAP );
HB_FUNC_EXTERN( UR_SUPER_ZAP );
HB_FUNC( LOGRDD_GETFUNCTABLE );
HB_FUNC_EXTERN( USRRDD_GETFUNCTABLE );
HB_FUNC_INIT( _LOGRDD_INIT );
HB_FUNC_EXTERN( RDDREGISTER );
HB_FUNC( HB_LOGRDDLOGFILENAME );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC( HB_LOGRDDTAG );
HB_FUNC( HB_LOGRDDACTIVE );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC( HB_LOGRDDMSGLOGBLOCK );
HB_FUNC_EXTERN( HB_ISEVALITEM );
HB_FUNC( HB_LOGRDDUSERLOGBLOCK );
HB_FUNC( HB_LOGRDDVALUETOTEXT );
HB_FUNC_EXTERN( HB_STRTOEXP );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( HB_VALTOSTR );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_STATIC( OPENLOGFILE );
HB_FUNC_EXTERN( USRRDD_ID );
HB_FUNC_EXTERN( HB_VFOPEN );
HB_FUNC_EXTERN( HB_VFSEEK );
HB_FUNC_STATIC( TOSTRING );
HB_FUNC_EXTERN( HB_VALTOEXP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( FIELDNAME );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( HB_VFWRITE );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_INITSTATICS();
HB_FUNC( LOGRDD );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LOGRDD )
{ "LOGRDD_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_INIT )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "HB_USERNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_USERNAME )}, NULL },
{ "HB_LOGRDDINHERIT", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "USRRDD_RDDDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( USRRDD_RDDDATA )}, NULL },
{ "LOGRDD_EXIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_EXIT )}, NULL },
{ "HB_VFCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFCLOSE )}, NULL },
{ "LOGRDD_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_CREATE )}, NULL },
{ "UR_SUPER_CREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_CREATE )}, NULL },
{ "TOLOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLOG )}, NULL },
{ "LOGRDD_CREATEFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_CREATEFIELDS )}, NULL },
{ "UR_SUPER_CREATEFIELDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_CREATEFIELDS )}, NULL },
{ "LOGRDD_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_OPEN )}, NULL },
{ "UR_SUPER_OPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_OPEN )}, NULL },
{ "LOGRDD_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_CLOSE )}, NULL },
{ "DBINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBINFO )}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "UR_SUPER_CLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_CLOSE )}, NULL },
{ "LOGRDD_APPEND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_APPEND )}, NULL },
{ "UR_SUPER_APPEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_APPEND )}, NULL },
{ "LOGRDD_DELETE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_DELETE )}, NULL },
{ "UR_SUPER_DELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_DELETE )}, NULL },
{ "LOGRDD_RECALL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_RECALL )}, NULL },
{ "UR_SUPER_RECALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_RECALL )}, NULL },
{ "LOGRDD_PUTVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_PUTVALUE )}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDGET )}, NULL },
{ "UR_SUPER_PUTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_PUTVALUE )}, NULL },
{ "LOGRDD_ZAP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_ZAP )}, NULL },
{ "UR_SUPER_ZAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( UR_SUPER_ZAP )}, NULL },
{ "LOGRDD_GETFUNCTABLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD_GETFUNCTABLE )}, NULL },
{ "USRRDD_GETFUNCTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( USRRDD_GETFUNCTABLE )}, NULL },
{ "_LOGRDD_INIT$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( _LOGRDD_INIT )}, NULL },
{ "RDDREGISTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDREGISTER )}, NULL },
{ "HB_LOGRDDLOGFILENAME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDLOGFILENAME )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_LOGRDDTAG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDTAG )}, NULL },
{ "HB_LOGRDDACTIVE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDACTIVE )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "HB_LOGRDDMSGLOGBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDMSGLOGBLOCK )}, NULL },
{ "HB_ISEVALITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISEVALITEM )}, NULL },
{ "HB_LOGRDDUSERLOGBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDUSERLOGBLOCK )}, NULL },
{ "HB_LOGRDDVALUETOTEXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGRDDVALUETOTEXT )}, NULL },
{ "HB_STRTOEXP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRTOEXP )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "HB_VALTOSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VALTOSTR )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "OPENLOGFILE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OPENLOGFILE )}, NULL },
{ "USRRDD_ID", {HB_FS_PUBLIC}, {HB_FUNCNAME( USRRDD_ID )}, NULL },
{ "HB_VFOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFOPEN )}, NULL },
{ "HB_VFSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFSEEK )}, NULL },
{ "TOSTRING", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOSTRING )}, NULL },
{ "HB_VALTOEXP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VALTOEXP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "FIELDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDNAME )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "HB_VFWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFWRITE )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL },
{ "LOGRDD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOGRDD )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LOGRDD, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LOGRDD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LOGRDD )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( LOGRDD_INIT )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,106,12,99,104,97,110,103,101,115,46,108,
		111,103,0,80,2,9,80,3,176,1,0,12,0,106,
		2,92,0,72,176,2,0,12,0,72,80,4,176,3,
		0,12,0,80,5,176,4,0,95,1,95,2,100,95,
		4,95,3,95,5,100,100,4,7,0,20,2,121,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_EXIT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,4,0,95,1,12,1,80,2,95,2,
		92,2,1,100,69,28,18,176,6,0,95,2,92,2,
		1,20,1,100,95,2,92,2,2,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,8,0,95,1,95,2,12,2,165,80,
		3,121,8,28,20,176,9,0,106,7,67,82,69,65,
		84,69,0,95,1,95,2,20,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_CREATEFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,11,0,95,1,95,2,12,2,165,80,
		3,121,8,28,26,176,9,0,106,13,67,82,69,65,
		84,69,70,73,69,76,68,83,0,95,1,95,2,20,
		3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,13,0,95,1,95,2,12,2,165,80,
		3,121,8,28,18,176,9,0,106,5,79,80,69,78,
		0,95,1,95,2,20,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,176,15,0,92,10,12,1,80,2,176,16,
		0,12,0,80,3,176,17,0,95,1,12,1,165,80,
		4,121,8,28,21,176,9,0,106,6,67,76,79,83,
		69,0,95,1,95,2,95,3,20,4,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_APPEND )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,19,0,95,1,95,2,12,2,165,80,
		3,121,8,28,20,176,9,0,106,7,65,80,80,69,
		78,68,0,95,1,95,2,20,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_DELETE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,21,0,95,1,12,1,165,80,2,121,
		8,28,18,176,9,0,106,7,68,69,76,69,84,69,
		0,95,1,20,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_RECALL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,23,0,95,1,12,1,165,80,2,121,
		8,28,18,176,9,0,106,7,82,69,67,65,76,76,
		0,95,1,20,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_PUTVALUE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,176,25,0,95,2,12,1,80,4,176,26,
		0,95,1,95,2,95,3,12,3,80,5,95,4,95,
		3,8,31,26,176,9,0,106,9,80,85,84,86,65,
		76,85,69,0,95,1,95,2,95,3,95,4,20,5,
		95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LOGRDD_ZAP )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,28,0,95,1,12,1,165,80,2,121,
		8,28,15,176,9,0,106,4,90,65,80,0,95,1,
		20,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( LOGRDD_GETFUNCTABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,5,116,63,0,176,3,0,12,0,80,6,92,
		100,3,1,0,80,7,95,4,82,1,0,108,0,95,
		7,92,94,2,108,5,95,7,92,95,2,108,7,95,
		7,92,37,2,108,10,95,7,92,14,2,108,12,95,
		7,92,40,2,108,14,95,7,92,36,2,108,18,95,
		7,92,13,2,108,20,95,7,92,15,2,108,22,95,
		7,92,29,2,108,24,95,7,92,28,2,108,27,95,
		7,92,50,2,176,30,0,95,1,95,2,95,3,95,
		4,95,6,95,7,95,5,20,7,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( _LOGRDD_INIT )
{
	static const HB_BYTE pcode[] =
	{
		176,32,0,106,7,76,79,71,82,68,68,0,122,20,
		2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDLOGFILENAME )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,63,0,103,1,0,121,16,28,33,176,
		4,0,103,1,0,12,1,80,2,95,2,122,1,80,
		3,176,34,0,95,1,12,1,28,8,95,1,95,2,
		122,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDTAG )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,63,0,103,1,0,121,16,28,35,176,
		4,0,103,1,0,12,1,80,2,95,2,92,3,1,
		80,3,176,34,0,95,1,12,1,28,9,95,1,95,
		2,92,3,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDACTIVE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,63,0,103,1,0,121,16,28,35,176,
		4,0,103,1,0,12,1,80,2,95,2,92,4,1,
		80,3,176,37,0,95,1,12,1,28,9,95,1,95,
		2,92,4,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDMSGLOGBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,63,0,103,1,0,121,16,28,35,176,
		4,0,103,1,0,12,1,80,2,95,2,92,6,1,
		80,3,176,39,0,95,1,12,1,28,9,95,1,95,
		2,92,6,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDUSERLOGBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,63,0,103,1,0,121,16,28,35,176,
		4,0,103,1,0,12,1,80,2,95,2,92,6,1,
		80,3,176,39,0,95,1,12,1,28,9,95,1,95,
		2,92,7,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGRDDVALUETOTEXT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,25,67,176,42,0,95,1,12,1,80,3,
		25,90,176,43,0,95,1,12,1,80,3,25,79,106,
		3,48,100,0,176,44,0,95,1,12,1,28,8,106,
		2,48,0,25,9,176,45,0,95,1,12,1,72,80,
		3,25,47,176,46,0,95,1,12,1,80,3,25,36,
		176,47,0,95,1,12,1,165,80,2,133,4,0,106,
		2,67,0,25,174,106,2,78,0,25,179,106,2,68,
		0,25,184,100,25,213,106,2,91,0,95,2,72,106,
		5,93,62,62,62,0,72,95,3,72,106,4,60,60,
		60,0,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OPENLOGFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,176,4,0,176,49,0,95,1,12,1,12,
		1,80,2,95,2,122,1,80,3,95,2,92,2,1,
		80,4,95,2,92,4,1,80,5,95,5,28,42,95,
		4,100,8,28,36,176,50,0,95,3,93,65,1,12,
		2,165,80,4,100,69,28,12,176,51,0,95,4,121,
		92,2,20,3,95,4,95,2,92,2,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOSTRING )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,26,97,1,95,3,92,2,1,110,7,176,
		53,0,95,3,20,1,7,106,9,84,97,98,108,101,
		58,32,34,0,95,3,92,2,1,72,106,12,34,44,
		32,65,108,105,97,115,58,32,34,0,72,176,16,0,
		12,0,72,106,14,34,44,32,87,111,114,107,65,114,
		101,97,58,32,0,72,176,43,0,95,2,12,1,72,
		110,7,106,9,84,97,98,108,101,58,32,34,0,95,
		3,72,106,12,34,44,32,65,108,105,97,115,58,32,
		34,0,72,95,4,72,106,14,34,44,32,87,111,114,
		107,65,114,101,97,58,32,0,72,176,43,0,95,2,
		12,1,72,110,7,176,16,0,12,0,106,14,45,62,
		82,101,99,78,111,40,41,32,61,61,32,0,72,176,
		43,0,176,54,0,12,0,12,1,72,110,7,176,16,
		0,12,0,106,14,45,62,82,101,99,78,111,40,41,
		32,61,61,32,0,72,176,43,0,176,54,0,12,0,
		12,1,72,110,7,176,16,0,12,0,106,14,45,62,
		82,101,99,78,111,40,41,32,61,61,32,0,72,176,
		43,0,176,54,0,12,0,12,1,72,110,7,176,16,
		0,12,0,106,2,40,0,72,176,43,0,176,54,0,
		12,0,12,1,72,106,4,41,45,62,0,72,176,55,
		0,176,56,0,95,3,12,1,92,10,12,2,72,106,
		5,32,58,61,32,0,72,176,41,0,95,4,12,1,
		72,110,7,106,9,65,108,105,97,115,58,32,34,0,
		176,16,0,12,0,72,106,10,32,84,97,98,108,101,
		58,32,34,0,72,176,15,0,92,10,12,1,72,106,
		2,34,0,72,110,7,95,1,133,9,0,106,7,67,
		82,69,65,84,69,0,26,148,254,106,13,67,82,69,
		65,84,69,70,73,69,76,68,83,0,26,137,254,106,
		5,79,80,69,78,0,26,135,254,106,6,67,76,79,
		83,69,0,26,189,254,106,7,65,80,80,69,78,68,
		0,26,236,254,106,7,68,69,76,69,84,69,0,26,
		3,255,106,7,82,69,67,65,76,76,0,26,26,255,
		106,9,80,85,84,86,65,76,85,69,0,26,47,255,
		106,4,90,65,80,0,26,99,255,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLOG )
{
	static const HB_BYTE pcode[] =
	{
		13,8,5,176,4,0,176,49,0,95,2,12,1,12,
		1,80,6,95,6,92,4,1,80,7,95,7,29,230,
		0,95,6,92,3,1,80,9,95,6,92,5,1,80,
		10,95,6,92,7,1,80,12,176,39,0,95,12,12,
		1,32,177,0,95,6,92,2,1,80,8,95,8,100,
		8,28,9,176,48,0,95,2,20,1,95,8,100,69,
		29,172,0,95,6,92,6,1,80,11,176,39,0,95,
		11,12,1,28,27,48,57,0,95,11,95,9,95,10,
		95,1,95,2,95,3,95,4,95,5,112,7,80,13,
		25,80,176,45,0,176,58,0,12,0,12,1,106,2,
		32,0,72,176,59,0,12,0,72,106,2,32,0,72,
		95,9,72,106,3,58,32,0,72,176,55,0,95,10,
		106,2,95,0,72,95,1,72,92,20,12,2,72,106,
		4,32,45,32,0,72,176,52,0,95,1,95,2,95,
		3,95,4,95,5,12,5,72,80,13,176,34,0,95,
		13,12,1,28,43,176,60,0,95,8,95,13,176,61,
		0,92,110,12,1,72,20,2,25,24,48,57,0,95,
		12,95,9,95,10,95,1,95,2,95,3,95,4,95,
		5,112,7,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,63,0,1,0,116,63,0,92,255,82,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( LOGRDD )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

