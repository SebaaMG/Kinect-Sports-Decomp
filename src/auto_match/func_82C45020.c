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
extern int fn_82C44FC0();
extern int fn_82C507A8();
extern unsigned int iStack_20;


undefined8 fn_82C45020(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int aiStack_30 [4];
  int iStack_20;
  
  if (*(int *)(param_1 + 0x499c) < *(int *)(param_2 + 0xcc) >> (*(uint *)(param_2 + 0x50c8) & 0x3f))
  {
    return 1;
  }
  if (*(int *)(param_1 + 0x49a4) < *(int *)(param_2 + 0xd0) >> (*(uint *)(param_2 + 0x50c8) & 0x3f))
  {
    return 1;
  }
  fn_82C507A8(param_2,*(undefined4 *)(param_2 + 0xb0bc),*(undefined4 *)(param_2 + 0xb0c0),
               aiStack_30);
  uVar1 = *(uint *)(param_2 + 0x567c);
  aiStack_30[0] = iStack_20 * 2 + aiStack_30[0];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      if (aiStack_30[0] * 2 < *(int *)(param_2 + 0xcc)) {
        return 1;
      }
      if (*(int *)(param_2 + 0xdc) !=
          ((*(int *)(param_2 + 0xcc) >> 1) + 1) * *(int *)(param_2 + 0x4fb0)) {
        return 1;
      }
      goto LAB_82c45118;
    }
    if (2 < uVar1) {
      return 1;
    }
  }
  if ((aiStack_30[0] < *(int *)(param_2 + 0xcc)) ||
     (*(int *)(param_2 + 0xdc) != *(int *)(param_2 + 0x4fb0) * (*(int *)(param_2 + 0xcc) + 1))) {
    return 1;
  }
LAB_82c45118:
  uVar2 = fn_82C44FC0(param_2);
  return uVar2;
}

