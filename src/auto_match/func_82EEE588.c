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
extern int fn_82EEDD00();


undefined8 fn_82EEE588(int param_1,short param_2,short *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int aiStack_50 [20];
  
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar5 = 0;
    *param_3 = 0;
    if (uVar2 != 0) {
      do {
        aiStack_50[0] = 0;
        uVar3 = fn_82EEDD00(param_1,uVar5,aiStack_50);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (aiStack_50[0] == 0) {
          return 0xffffffffc00d36bb;
        }
        if ((param_2 == -1) || (param_2 == *(short *)(aiStack_50[0] + 0x14))) {
          if (param_4 == 0) {
            iVar4 = *(int *)(aiStack_50[0] + 8);
          }
          else {
            iVar4 = *(int *)(aiStack_50[0] + 0xc);
          }
          if (iVar4 == 0) {
            sVar1 = *param_3;
            *param_3 = sVar1 + 1;
            if (*(int *)(aiStack_50[0] + 0x38) != 0) {
              *param_3 = sVar1 + 2;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)uVar2);
    }
  }
  return uVar3;
}

