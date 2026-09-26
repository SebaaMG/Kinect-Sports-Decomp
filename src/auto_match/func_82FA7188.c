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
extern unsigned int *auStack_40;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FA7EB0();
extern int fn_82FA9F88();
extern int fn_82FAA968();
extern int fn_82FAB6C0();
extern int fn_82FABF58();
extern int fn_82FABF60();
extern int fn_82FF4BB8();
extern int fn_82FF5028();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264234;
extern unsigned int lbl_83264238;
extern unsigned int lbl_8326423C;
extern unsigned int lbl_83264304;


undefined8 fn_82FA7188(undefined8 param_1,int *param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  int iVar5;
  int *piVar6;
  uint auStack_40 [16];
  
  uVar2 = fn_82FA5060(lbl_831BC768,0x50);
  if (((uVar2 & 0xffffffff) == 0) ||
     (puVar4 = (undefined4 *)fn_82FA9F88(uVar2,param_2), puVar4 == (undefined4 *)0x0)) {
    uVar3 = 2;
  }
  else {
    uVar3 = fn_82FAA968(puVar4,param_3,param_4);
    if ((int)uVar3 == 1) {
      if (lbl_83264234 == (int *)0x0) {
        lbl_83264234 = param_2;
        lbl_83264238 = param_2;
        param_2[0xf] = 0;
      }
      else {
        param_2[0xf] = (int)lbl_83264234;
        lbl_83264234 = param_2;
      }
      lbl_8326423C = lbl_8326423C + 1;
      fn_82FABF58(param_2,puVar4);
      if (*(int *)(param_3 + 0x10) != 0) {
        auStack_40[0] = 0;
        uVar3 = fn_82FF5028(lbl_83264304,*(int *)(param_3 + 0x10),param_2 + 4,auStack_40);
        fn_82FABF60(param_2,auStack_40[0]);
        iVar5 = (**(code **)(*param_2 + 0x20))(param_2);
        if (iVar5 != 0) {
          piVar6 = (int *)(**(code **)(*param_2 + 0x20))(param_2);
          (**(code **)(*piVar6 + 0x94))(piVar6,3);
        }
        if (((auStack_40[0] & 0x20000) != 0) &&
           (iVar5 = fn_82FA7EB0(0xffffffff83264240,*(undefined4 *)(param_3 + 0x10)), iVar5 != 1)
           ) {
          fn_82FABF60(param_2,CONCAT44(auStack_40[0],auStack_40[0]) & 0xfffffffffffdffff);
        }
        fn_82FF4BB8(lbl_83264304,*(undefined4 *)(param_3 + 0x10));
      }
    }
    else {
      fn_82FAB6C0(puVar4);
      uVar1 = lbl_831BC768;
      (**(code **)*puVar4)(puVar4,0);
      fn_82FA5190(uVar1,puVar4);
    }
  }
  return uVar3;
}

