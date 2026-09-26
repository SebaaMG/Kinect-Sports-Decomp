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
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_82698190();
extern int fn_826B44A0();


undefined8 fn_8272C1E0(int *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar4;
  undefined8 uVar3;
  undefined4 *apuStack_40 [4];
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1[0x2d] + 0x10) == 0) {
LAB_8272c2d4:
    uVar3 = 1;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x5c))();
    if (lVar2 != 0) {
      auStack_30[0] = 0;
      cVar4 = fn_826B44A0(lVar2,param_1 + 0x2d,auStack_30,0,0,0,0);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x1ac))(param_1,0xffffffff82196582,0,0);
      }
      else {
        cVar4 = fn_82698190(auStack_30,lVar2,param_1 + 0x2e);
        if (cVar4 == '\0') {
          fn_82695FA0(param_1 + 0x2e,auStack_30);
          fn_82696D38(apuStack_40,auStack_30,lVar2,0xffffffffffffffff,0);
          (**(code **)(*param_1 + 0x1ac))(param_1,*apuStack_40[0],0,0);
          uVar1 = apuStack_40[0][2];
          apuStack_40[0][2] = (int)((ulonglong)uVar1 - 1);
          if ((ulonglong)uVar1 - 1 == 0) {
            fn_826944C8(apuStack_40[0]);
          }
          fn_82696330(auStack_30);
          goto LAB_8272c2d4;
        }
      }
      fn_82696330(auStack_30);
    }
    uVar3 = 0;
  }
  return uVar3;
}

