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
extern unsigned int *auStack_70;
extern int fn_82A2BAF0();
extern int fn_82A2D960();
extern int fn_82F68CC0();
extern int iRam83219d1c;
extern int iRam83219d20;
extern int iRam83219d24;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;


undefined8 fn_82A2DC18(int param_1,ulonglong param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uStack_80;
  int aiStack_7c [3];
  undefined1 auStack_70 [20];
  uint uStack_5c;
  
  bVar1 = *(byte *)(param_1 + 0xca);
  iRam83219d1c = iRam83219d1c + 1;
  iVar4 = fn_82A2BAF0();
  uVar5 = param_3;
  uVar2 = param_3 + 1;
  if (iVar4 == 0) {
    do {
      uVar7 = uVar2;
      if (uVar5 == bVar1) {
        puVar6 = (undefined1 *)(param_1 + 0xb0);
        iRam83219d24 = iRam83219d24 + 1;
        uVar7 = uVar5;
        goto LAB_82a2dcd4;
      }
      iVar4 = fn_82A2BAF0(param_1,param_2,uVar7 + 1,&uStack_80,aiStack_7c);
      uVar5 = uVar7;
      uVar2 = uVar7 + 1;
    } while (iVar4 == 0);
    if (uVar7 != param_3) {
      do {
        iVar4 = aiStack_7c[0];
        uVar5 = uStack_80;
        trapWord(6,(ulonglong)*(uint *)("XLNI_DET_MEDIA" + uVar7 * 4 + 0xc),0);
        fn_82F68CC0(auStack_70,
                     (((param_2 & 0xffffffff) /
                      (ulonglong)*(uint *)("XLNI_DET_MEDIA" + uVar7 * 4 + 0xc)) % 0xaa) * 0x18 +
                     (ulonglong)uStack_80,0x18);
        puVar6 = auStack_70;
        if ((*(byte *)(iVar4 + 7) & 4) == 0) {
          uStack_5c = uStack_5c & 0x7fffffff;
        }
        uVar5 = uVar5 - *(int *)(param_1 + 0x34);
        iVar4 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
        uVar7 = uVar7 - 1;
LAB_82a2dcd4:
        uVar3 = fn_82A2D960(param_1,param_2,uVar7 + 1,puVar6,&uStack_80,aiStack_7c);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if ((*(uint *)(puVar6 + 0x14) & 0x80000000) != 0) {
          *(byte *)(aiStack_7c[0] + 7) = *(byte *)(aiStack_7c[0] + 7) | 4;
        }
      } while (uVar7 != param_3);
      *param_4 = uStack_80;
      return 0;
    }
  }
  iRam83219d20 = iRam83219d20 + 1;
  *param_4 = uStack_80;
  return 0;
}

