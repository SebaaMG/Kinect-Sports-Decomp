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
extern unsigned int *auStack_40;
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E64450();
extern int fn_82E644B8();


undefined8 fn_82E64E30(int param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint auStack_40 [16];
  
  uVar4 = 0;
  fn_82E50D88(param_1 + 0xc);
  if (param_3 == (undefined4 *)0x0) {
LAB_82e64e60:
    uVar4 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0xb8) == -1) {
      uVar4 = 0xffffffff80004005;
      goto LAB_82e64f08;
    }
    lVar1 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),auStack_40);
    uVar2 = -(uint)(lVar1 != 0) & auStack_40[0];
    if (uVar2 != 0) {
      if ((ulonglong)*(uint *)(uVar2 + 0x6c) <= (param_2 & 0xffffffff)) goto LAB_82e64e60;
      lVar1 = fn_82E64450(uVar2 + 4,param_2,auStack_40);
      puVar3 = (undefined4 *)(-(uint)(lVar1 != 0) & auStack_40[0]);
      if (puVar3 != (undefined4 *)0x0) {
        *param_3 = *puVar3;
        param_3[1] = puVar3[1];
        param_3[2] = puVar3[2];
        param_3[3] = puVar3[3];
        param_3[4] = puVar3[4];
        goto LAB_82e64f08;
      }
    }
    uVar4 = 0xffffffff80004003;
  }
LAB_82e64f08:
  fn_82E50FA0(param_1 + 0xc);
  return uVar4;
}

