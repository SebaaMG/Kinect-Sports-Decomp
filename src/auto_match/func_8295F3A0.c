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
extern int fn_8295D318();


undefined8 fn_8295F3A0(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_40 [16];
  
  piVar3 = (int *)((uint *)param_1[0x41])[4];
  uVar1 = *(uint *)param_1[0x41] & 0xfffff;
  if (param_1[0x22] != *(int *)(*(int *)(*piVar3 * 4 + param_1[5]) + 4)) {
    uVar2 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],aiStack_40,uVar1,0,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    piVar3 = aiStack_40;
  }
  uVar2 = fn_8295D318(param_1,0x24,piVar3,uVar1,*(undefined4 *)(param_1[0x41] + 8),0,0,uVar1);
  if (-1 < (int)uVar2) {
    if ((piVar3 == aiStack_40) &&
       (uVar2 = fn_8295D318(param_1,1,*(undefined4 *)(param_1[0x41] + 0x10),uVar1,aiStack_40,0
                                  ,0,uVar1), (int)uVar2 < 0)) {
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

