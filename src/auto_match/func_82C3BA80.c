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
extern int fn_82A6D200();
extern int fn_82A75DF8();
extern int fn_82C30370();
extern unsigned int iStack_6c;
extern unsigned int lbl_820F9A38;
extern unsigned int lbl_820F9B28;
extern unsigned int uStack_70;


undefined8 fn_82C3BA80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined8 uVar5;
  short sVar6;
  int *piVar7;
  uint uStack_70;
  int iStack_6c;
  int aiStack_68 [26];
  
  iVar1 = *param_1;
  iVar2 = *(int *)(param_2 + 4);
  uVar5 = 0;
  sVar6 = *(short *)(iVar1 + 0x20);
  do {
    if (param_3 <= sVar6) {
      return uVar5;
    }
    uVar5 = 0;
    iVar3 = *param_1;
    aiStack_68[0] = 0;
    iStack_6c = 0;
    if (param_1[0x1f] == 0) {
      piVar7 = param_1 + 0x38;
      uVar5 = fn_82A75DF8(0xffffffff820f94e8,piVar7,&uStack_70,&iStack_6c,aiStack_68);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar5 = fn_82A6D200(piVar7,uStack_70);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if (iStack_6c == 0) goto LAB_82c3bb3c;
      if (iStack_6c == 1) {
        *(undefined2 *)(iVar3 + 0x1e) = 0;
        *(short *)(iVar3 + 0x1c) =
             ((short)*(undefined4 *)(iVar3 + 0x130) - *(short *)(iVar3 + 0x20)) + -1;
      }
      else {
        uVar5 = fn_82A6D200(piVar7,1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(undefined2 *)(iVar3 + 0x1c) = *(undefined2 *)(&lbl_820F9A38 + (iStack_6c + -2) * 2);
        *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(&lbl_820F9B28 + (iStack_6c + -2) * 2);
        *(int *)(iVar3 + 0x24) = -1 - (aiStack_68[0] >> 0x1f);
      }
    }
    else if (param_1[0x1f] == 3) {
LAB_82c3bb3c:
      param_1[0x1f] = 3;
      uVar5 = fn_82C30370(param_1 + 0x38,0xe,&uStack_70);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      *(short *)(iVar3 + 0x1e) = (short)(uStack_70 >> 6);
      *(uint *)(iVar3 + 0x24) = (uStack_70 & 1) - 1;
      *(short *)(iVar3 + 0x1c) = (short)((int)(uStack_70 & 0x3e) >> 1);
      param_1[0x1f] = 0;
    }
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar4 = (ushort)*(undefined4 *)(iVar1 + 0x24);
    *(ushort *)(iVar1 + 0x1e) = (*(ushort *)(iVar1 + 0x1e) ^ uVar4) - uVar4;
    if (param_3 <= (int)*(short *)(iVar1 + 0x20) + (int)*(short *)(iVar1 + 0x1c)) {
      return uVar5;
    }
    sVar6 = *(short *)(iVar1 + 0x20) + *(short *)(iVar1 + 0x1c);
    *(short *)(iVar1 + 0x20) = sVar6;
    iVar3 = sVar6 * 4;
    *(int *)(iVar3 + iVar2) = (int)*(short *)(iVar1 + 0x1e) + *(int *)(iVar3 + iVar2);
    *(short *)(iVar1 + 0x20) = *(short *)(iVar1 + 0x20) + 1;
    param_1[0x1f] = 0;
    sVar6 = *(short *)(iVar1 + 0x20);
  } while( true );
}

