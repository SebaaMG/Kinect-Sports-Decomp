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
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_8257AB78();
extern int fn_8257AD50();


longlong fn_8257AAC8(int param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint auStack_90 [4];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [68];
  
  fn_8257AB78(auStack_90,param_1,param_2);
  uVar2 = (ulonglong)auStack_90[0];
  if (uVar2 == *(uint *)(param_1 + 4)) {
    fn_82230300(auStack_80,0,0);
    fn_8223B688(auStack_60,param_2);
    fn_82240378(auStack_44,auStack_80);
    puVar1 = (uint *)fn_8257AD50(auStack_90,param_1,auStack_60);
    uVar2 = (ulonglong)*puVar1;
    fn_82230300(auStack_44,1,0);
    fn_82230300(auStack_60,1,0);
    fn_82230300(auStack_80,1,0);
  }
  return uVar2 + 0x24;
}

