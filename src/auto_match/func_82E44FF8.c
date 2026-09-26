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
extern int fn_82E442E0();


undefined8 fn_82E44FF8(undefined4 *param_1,ulonglong *param_2)

{
  short *psVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int aiStack_30 [12];
  
  psVar1 = (short *)param_1[1];
  *param_1 = 0;
  iVar5 = 1;
  if (param_2 == (ulonglong *)0x0) {
    uVar4 = 0x80070057;
LAB_82e4502c:
    uVar2 = 0;
    *param_1 = uVar4;
  }
  else {
    if (psVar1 < (short *)param_1[2]) {
      if (*psVar1 == 0x2d) {
        iVar5 = -1;
        param_1[1] = psVar1 + 1;
      }
      iVar3 = fn_82E442E0(param_1,aiStack_30);
      if (iVar3 == 0) {
        return 0;
      }
      *(int *)param_2 = aiStack_30[0];
      if (iVar5 < 0) {
        if (0xffffffff80000000 < *param_2) goto LAB_82e450ac;
        *(int *)param_2 = -aiStack_30[0];
      }
      else if (0x7fffffff < *param_2) {
LAB_82e450ac:
        param_1[1] = psVar1;
        uVar4 = 0x80070216;
        goto LAB_82e4502c;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

