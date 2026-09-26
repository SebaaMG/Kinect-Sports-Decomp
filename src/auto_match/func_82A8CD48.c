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
extern unsigned int *auStack_30;
extern int fn_82A8BE08();
extern int fn_82A8C0E0();
extern int fn_82A8C850();
extern int fn_82A8CCB8();
extern unsigned int lbl_8315FA80;


undefined8 fn_82A8CD48(uint *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = 0;
  uVar2 = fn_82A8C850(auStack_30);
  *param_1 = (uint)uVar2;
  if (((uVar2 & 0xffffffff) < 0x49) &&
     (cVar3 = fn_82A8CCB8(auStack_30,param_2,param_1[1],uVar2,0x60), cVar3 != '\0')) {
    if (lbl_8315FA80 != 1) {
      uVar2 = (ulonglong)*param_1;
      if (-1 < (longlong)(uVar2 - 1)) {
        lVar4 = (uVar2 - 1) * 0x60;
        do {
          iVar1 = param_1[1] + (int)lVar4;
          *(float *)(iVar1 + 0x18) = -*(float *)(iVar1 + 0x18);
          iVar1 = param_1[1] + (int)lVar4;
          *(float *)(iVar1 + 0x20) = -*(float *)(iVar1 + 0x20);
          *(float *)(iVar1 + 0x24) = -*(float *)(iVar1 + 0x24);
          lVar4 = lVar4 + -0x60;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    fn_82A8BE08(param_1);
    fn_82A8C0E0();
    return 1;
  }
  *param_1 = 0;
  return 0;
}

