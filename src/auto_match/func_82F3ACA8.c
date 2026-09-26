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
extern unsigned int *auStack_100;
extern int fn_82EE3128();
extern int fn_82F3A1D0();
extern int fn_82F3A818();
extern unsigned int lbl_82162C1C;


uint fn_82F3ACA8(int param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_100 [232];
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1220);
  }
  uVar1 = fn_82F3A1D0(auStack_100,param_2);
  uVar2 = fn_82F3A818(param_1,*(undefined4 *)(param_1 + 0x1220),uVar1);
  if (-1 < (int)uVar2) {
    *(int *)(param_1 + 0x1220) = *(int *)(param_1 + 0x1220) + 1;
  }
  *(undefined ***)(param_2 + 0x14) = &lbl_82162C1C;
  if (*(int *)(param_2 + 0x18) == 0) {
    fn_82EE3128(param_2 + 0x14,0);
  }
  return uVar2 >> 0x1f ^ 1;
}

