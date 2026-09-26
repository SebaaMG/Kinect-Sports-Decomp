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
extern int fn_82A75588();
extern int fn_82C2E420();
extern int fn_82C30370();


undefined8 fn_82C3A9E0(int *param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  int aiStack_50 [20];
  
  iVar1 = *param_1;
  aiStack_50[0] = 0;
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x3c) < 3) {
    uVar5 = 0;
    *(undefined2 *)((int)param_1 + 0x96) = 0;
  }
  else if (*(short *)(iVar1 + 0x244) == 1) {
    iVar6 = *(int *)(iVar1 + 0x140);
    sVar3 = **(short **)(iVar1 + 0x248);
    *(undefined2 *)((int)param_1 + 0x96) = 0;
    iVar6 = sVar3 * 0x6f0 + iVar6;
    *(undefined1 *)(iVar6 + 0xb4) = 0;
    dVar7 = (double)fn_82C2E420(0,0);
    *(float *)(iVar6 + 0xc4) = (float)dVar7;
    uVar5 = 0;
  }
  else {
    if (*(short *)((int)param_1 + 0x96) == -1) {
      aiStack_50[0] = 0;
      uVar5 = fn_82C30370(param_1 + 0x38,3,aiStack_50);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      *(undefined2 *)((int)param_1 + 0x96) = 0;
      param_1[0x21] = aiStack_50[0];
    }
    if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar1 + 0x244)) {
      piVar4 = param_1 + 0x38;
      do {
        iVar6 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar1 + 0x248)) * 0x6f0 +
                *(int *)(iVar1 + 0x140);
        uVar5 = fn_82A75588(piVar4,(ulonglong)(uint)param_1[0x21] + 1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        aiStack_50[0] = 0;
        uVar5 = fn_82C30370(piVar4,1,aiStack_50);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (aiStack_50[0] == 0) {
          *(undefined1 *)(iVar6 + 0xb4) = 0;
          uVar2 = 0;
        }
        else if (param_1[0x21] == 0) {
          *(undefined1 *)(iVar6 + 0xb4) = 1;
          uVar2 = 1;
        }
        else {
          aiStack_50[0] = 0;
          uVar5 = fn_82C30370(piVar4,param_1[0x21],aiStack_50);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar2 = aiStack_50[0] + 1U & 0xff;
          *(char *)(iVar6 + 0xb4) = (char)(aiStack_50[0] + 1U);
        }
        dVar7 = (double)fn_82C2E420(uVar2,0);
        *(float *)(iVar6 + 0xc4) = (float)dVar7;
        sVar3 = *(short *)((int)param_1 + 0x96) + 1;
        *(short *)((int)param_1 + 0x96) = sVar3;
      } while (sVar3 < *(short *)(iVar1 + 0x244));
    }
  }
  return uVar5;
}

