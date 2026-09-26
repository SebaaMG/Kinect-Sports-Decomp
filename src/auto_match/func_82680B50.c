typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_44b8;
extern unsigned int *auStack_44ba;
extern unsigned int *auStack_44bc;
extern unsigned int *auStack_44be;
extern unsigned int uStack_44bf;
extern unsigned int uStack_44c0;


/* WARNING: Removing unreachable block (ram,0x826811cc) */
/* WARNING: Removing unreachable block (ram,0x82680f18) */
/* WARNING: Removing unreachable block (ram,0x82680e64) */
/* WARNING: Removing unreachable block (ram,0x82680e78) */
/* WARNING: Removing unreachable block (ram,0x82680e94) */
/* WARNING: Removing unreachable block (ram,0x82680e98) */
/* WARNING: Removing unreachable block (ram,0x82680f88) */
/* WARNING: Removing unreachable block (ram,0x82680f94) */
/* WARNING: Removing unreachable block (ram,0x82680e5c) */
/* WARNING: Removing unreachable block (ram,0x82680e00) */
/* WARNING: Removing unreachable block (ram,0x82680da4) */
/* WARNING: Removing unreachable block (ram,0x82680e10) */
/* WARNING: Removing unreachable block (ram,0x82680df0) */
/* WARNING: Removing unreachable block (ram,0x82680e1c) */
/* WARNING: Removing unreachable block (ram,0x82680f50) */
/* WARNING: Removing unreachable block (ram,0x82680f58) */
/* WARNING: Removing unreachable block (ram,0x82680f7c) */
/* WARNING: Removing unreachable block (ram,0x82680f60) */
/* WARNING: Removing unreachable block (ram,0x82680f68) */
/* WARNING: Removing unreachable block (ram,0x82680f70) */
/* WARNING: Removing unreachable block (ram,0x82680e28) */
/* WARNING: Removing unreachable block (ram,0x82680f44) */
/* WARNING: Removing unreachable block (ram,0x82680e30) */
/* WARNING: Removing unreachable block (ram,0x82680e38) */
/* WARNING: Removing unreachable block (ram,0x82680e48) */
/* WARNING: Removing unreachable block (ram,0x82680e4c) */
/* WARNING: Removing unreachable block (ram,0x82680e54) */
/* WARNING: Removing unreachable block (ram,0x82680fa8) */
/* WARNING: Removing unreachable block (ram,0x82680fc8) */
/* WARNING: Removing unreachable block (ram,0x82680fec) */
/* WARNING: Removing unreachable block (ram,0x82680fd0) */
/* WARNING: Removing unreachable block (ram,0x82680ff0) */
/* WARNING: Removing unreachable block (ram,0x82681000) */
/* WARNING: Removing unreachable block (ram,0x82681004) */
/* WARNING: Removing unreachable block (ram,0x82681010) */
/* WARNING: Removing unreachable block (ram,0x826810c0) */
/* WARNING: Removing unreachable block (ram,0x826810d8) */
/* WARNING: Removing unreachable block (ram,0x826810f0) */
/* WARNING: Removing unreachable block (ram,0x82681078) */
/* WARNING: Removing unreachable block (ram,0x8268108c) */
/* WARNING: Removing unreachable block (ram,0x826810a4) */
/* WARNING: Removing unreachable block (ram,0x82681154) */
/* WARNING: Removing unreachable block (ram,0x8268115c) */
/* WARNING: Removing unreachable block (ram,0x82681190) */
/* WARNING: Removing unreachable block (ram,0x82681194) */
/* WARNING: Removing unreachable block (ram,0x82681014) */
/* WARNING: Removing unreachable block (ram,0x8268103c) */
/* WARNING: Removing unreachable block (ram,0x82681040) */
/* WARNING: Removing unreachable block (ram,0x82681064) */
/* WARNING: Removing unreachable block (ram,0x826810a8) */
/* WARNING: Removing unreachable block (ram,0x826810f4) */
/* WARNING: Removing unreachable block (ram,0x826810fc) */
/* WARNING: Removing unreachable block (ram,0x82681114) */
/* WARNING: Removing unreachable block (ram,0x8268111c) */
/* WARNING: Removing unreachable block (ram,0x826810b0) */
/* WARNING: Removing unreachable block (ram,0x8268106c) */
/* WARNING: Removing unreachable block (ram,0x826811a4) */
/* WARNING: Removing unreachable block (ram,0x826811ac) */
/* WARNING: Removing unreachable block (ram,0x826811b8) */
/* WARNING: Removing unreachable block (ram,0x826811c0) */
/* WARNING: Removing unreachable block (ram,0x826811dc) */
/* WARNING: Removing unreachable block (ram,0x826811ec) */
/* WARNING: Removing unreachable block (ram,0x82680c90) */
/* WARNING: Removing unreachable block (ram,0x82680c98) */
/* WARNING: Removing unreachable block (ram,0x82680db0) */
/* WARNING: Removing unreachable block (ram,0x82680dbc) */
/* WARNING: Removing unreachable block (ram,0x82680dd0) */

undefined8 fn_82680B50(int *param_1)

{
  char cVar1;
  undefined1 uStack_44c0;
  undefined1 uStack_44bf;
  undefined1 auStack_44be [2];
  undefined1 auStack_44bc [2];
  undefined1 auStack_44ba [2];
  undefined1 auStack_44b8 [17592];
  
  if ((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 8))(), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x28))(param_1,&uStack_44c0,1);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44b8,1);
    (**(code **)(*param_1 + 0x28))(param_1,&uStack_44bf,1);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44ba,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44bc,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44be,1);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44bc,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44bc,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44bc,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44ba,2);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44be,1);
    (**(code **)(*param_1 + 0x28))(param_1,auStack_44ba,1);
  }
  return 0;
}

