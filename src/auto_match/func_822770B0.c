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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266F628();
extern int fn_8266F678();
extern unsigned int iStack_34;
extern unsigned int lbl_8219563C;
extern unsigned int lbl_821CC160;


undefined4 * fn_822770B0(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  *param_1 = param_3;
  puVar5 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_82266D28(puVar5,0);
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  uVar2 = lbl_821CC160;
  uVar1 = lbl_8219563C;
  param_1[0x12] = 0;
  param_1[5] = uVar1;
  param_1[0x13] = 0;
  param_1[6] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  *(ulonglong *)(param_1 + 0xd) = CONCAT44(uVar2,uVar2);
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(uVar2,uVar2);
  if (param_2 != (uint *)0x0) {
    uVar4 = (ulonglong)*param_2;
    if (uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0)) {
      uVar3 = fn_8266EC60();
      uVar3 = fn_8266ECF0(auStack_38,uVar3,param_2,5,0,0xffffffffffffffff,0,0x18280143);
      fn_823F2E20(puVar5,uVar3);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      fn_8266F678(*puVar5,1);
      fn_8266F628(*puVar5,1);
    }
  }
  return param_1;
}

