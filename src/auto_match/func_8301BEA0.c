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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_830223C8();
extern int fn_83026420();
extern int fn_830265E0();
extern int fn_83026A78();
extern unsigned int lbl_8217C390;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_a0;


undefined8 fn_8301BEA0(undefined4 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 uStack_a0;
  int aiStack_94 [37];
  
  aiStack_94[1] = *(int *)(param_2 + 0xfc);
  puVar7 = param_1 + 0x58;
  iVar1 = *(int *)(aiStack_94[1] + 8);
  uStack_a0 = *(undefined8 *)(*(int *)(iVar1 + 0x6c) + 0x20);
  uVar4 = fn_83026A78(param_2,puVar7,&uStack_a0,iVar1,*(undefined2 *)(param_1 + 1),*param_1);
  if ((int)uVar4 == 1) {
    uVar9 = 2;
    uVar11 = 0;
    puVar8 = (undefined4 *)(param_2 + 0x100);
    piVar10 = (int *)(iVar1 + 0xe8);
    uStack_a0 = CONCAT44(*param_1,(((U64)(uStack_a0) >> 32) & 0xFFFFFFFF));
    aiStack_94[2] = param_2;
    do {
      if (*piVar10 != -1) {
        puVar5 = (undefined4 *)fn_82FA5060(lbl_831BC770,0x24);
        if (puVar5 == (undefined4 *)0x0) {
          return 2;
        }
        *puVar5 = &lbl_8217C390;
        puVar5[1] = 0;
        iVar6 = fn_83026420(puVar5,piVar10,uVar11,iVar1,&uStack_a0);
        if (iVar6 == 1) {
          *puVar8 = puVar5;
          lVar2 = uVar9 << 2;
          uVar9 = uVar9 + 1 & 0xff;
          *(undefined4 **)((int)aiStack_94 + (int)lVar2 + 4) = puVar5;
        }
        else {
          fn_830265E0(puVar5);
          uVar3 = lbl_831BC770;
          (**(code **)*puVar5)(puVar5,0);
          fn_82FA5190(uVar3,puVar5);
        }
      }
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
      piVar10 = piVar10 + 4;
    } while ((uVar11 & 0xffffffff) < 4);
    uVar4 = fn_830223C8(param_2 + 0xc0,puVar7,&uStack_a0);
    if ((int)uVar4 == 1) {
      iVar1 = param_1[0x68];
      uVar11 = uVar9 + 1 & 0xff;
      *(int *)((int)aiStack_94 + (int)(uVar9 << 2) + 4) = param_2 + 0xc0;
      if ((iVar1 != 0) ||
         (uVar4 = fn_830223C8(param_1 + 0x66,puVar7,&uStack_a0), (int)uVar4 == 1)) {
        while (uVar11 = uVar11 + 0xff & 0xff, uVar11 != 0) {
          iVar1 = (int)(uVar11 << 2);
          piVar10 = *(int **)((int)aiStack_94 + iVar1 + 4);
          (**(code **)(*piVar10 + 0x1c))(piVar10,*(undefined4 *)((int)aiStack_94 + iVar1));
        }
      }
    }
  }
  return uVar4;
}

