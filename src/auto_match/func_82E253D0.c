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
extern int fn_82E24948();
extern int fn_82E25140();
extern int fn_82E49558();
extern int fn_82E4B6C8();


undefined8
fn_82E253D0(int param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [16];
  
  puVar2 = (undefined4 *)(param_1 + 0x104);
  if (*(int *)(param_1 + 0x104) == 0) {
    *(int *)(param_1 + 0x110) = *param_2;
    *(int *)(param_1 + 0x114) = param_2[1];
    *(int *)(param_1 + 0x118) = param_2[2];
    if (*param_2 == 0) {
      if ((param_2[1] == 0) || (param_2[2] == 0)) goto LAB_82e254e0;
      uVar1 = fn_82E49558(puVar2);
    }
    else {
      uVar1 = fn_82E4B6C8(3,4,0,*param_2,puVar2);
    }
    if (-1 < (int)uVar1) {
      uVar1 = fn_82E24948(param_1,param_3,param_4,param_5,param_6);
      if (-1 < (int)uVar1) {
        auStack_40[0] = 0;
        uVar1 = fn_82E25140(param_1);
        if ((-1 < (int)uVar1) &&
           (uVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x14))
                              (*(int **)(param_1 + 0x108),0,auStack_40), -1 < (int)uVar1)) {
          uVar1 = (**(code **)(*(int *)*puVar2 + 0x1c))((int *)*puVar2,auStack_40[0]);
        }
      }
    }
  }
  else {
LAB_82e254e0:
    uVar1 = 0xffffffff8000ffff;
  }
  return uVar1;
}

