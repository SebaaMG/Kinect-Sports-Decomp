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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_8295D318();
extern int fn_8295F950();


undefined8 fn_82960270(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  uVar1 = *(uint *)param_1[0x41] & 0xfffff;
  if (uVar1 == 1) {
    uVar2 = 5;
  }
  else if (uVar1 == 3) {
    uVar2 = 8;
  }
  else {
    if (uVar1 != 4) {
      uVar2 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_20,2,0,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_8295D318(param_1,5,auStack_20,2,(ulonglong)*(uint *)(param_1[0x41] + 8),
                                (ulonglong)*(uint *)(param_1[0x41] + 8) + 8,0,2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_8295D318(param_1,2,*(undefined4 *)(param_1[0x41] + 0x10),
                                *(undefined4 *)(param_1[0x41] + 0xc),auStack_20,auStack_1c,0,1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      return 0;
    }
    uVar2 = 9;
  }
  uVar2 = fn_8295F950(param_1,uVar2,0);
  return uVar2;
}

