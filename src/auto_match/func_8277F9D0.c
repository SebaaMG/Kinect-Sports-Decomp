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
extern int fn_8277D1C8();
extern int fn_8277F4F0();
extern int fn_8277F5D8();
extern unsigned int iStack_64;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8277F9D0(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint *puStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined1 uStack_60;
  
  iVar1 = *(int *)(param_2 + 4);
  puStack_70 = &uStack_90;
  puVar11 = (uint *)(param_1 + 0x144);
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  uStack_8c = *(undefined4 *)(param_2 + 4);
  uStack_90 = *(undefined4 *)(iVar2 + 8);
  uStack_74 = *(undefined4 *)(iVar2 + 0xc);
  uStack_6c = *(uint *)(iVar2 + 8);
  iStack_64 = *(int *)(iVar2 + 4);
  uStack_78 = *(undefined4 *)(iVar2 + 0x14);
  uStack_7c = *(uint *)(iVar2 + 0x10);
  uStack_68 = *(uint *)(*(int *)((uStack_7c >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x150)) +
                       (uStack_7c & 0xf) * 8);
  uStack_60 = 1;
  puStack_80 = puVar11;
  fn_8277F4F0();
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar9 = param_3;
  do {
    fn_8277F4F0(param_1,uVar8,uVar9);
    do {
      do {
        cVar7 = fn_8277D1C8(&puStack_80,0xffffffff8277ba68);
        uVar5 = uStack_68;
        uVar10 = uStack_6c;
        puVar4 = puStack_70;
        if (cVar7 == '\0') {
          uVar10 = *(int *)(param_1 + 0x134) - 1;
          if (iVar2 == *(int *)((uVar10 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x140)) +
                       (uVar10 & 0xf) * 0x1c) {
            if (*(uint *)(iVar2 + 0x10) < *puVar11) {
              *puVar11 = *(uint *)(iVar2 + 0x10);
            }
            if (*(int *)(param_1 + 0x134) != 0) {
              *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
            }
          }
          return;
        }
      } while (uStack_6c == uStack_68);
      if ((iStack_64 != iVar3) || (puStack_70[1] == 0)) {
        uVar6 = fn_8277F5D8(param_1,iVar3);
        puVar4[1] = (int)uVar6;
        if (uVar10 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar6,uVar10 | 0x40000000);
        }
        if (uVar5 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar6,CONCAT44(uVar5,uVar5) & 0xffffffffbfffffff);
        }
      }
      uVar8 = puVar4[1];
    } while ((int)param_3 == -1);
    fn_8277F4F0(param_1,uVar8,param_3 | 0x40000000);
    uVar9 = param_3 << 0x20 | param_3 & 0xbfffffff;
  } while( true );
}

