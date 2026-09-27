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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822613B0();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_8243D2D8();
extern int fn_82F512E8();
extern int fn_82F52348();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823429D0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 in_r0;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 in_vr0 [16];
  undefined4 uVar15;
  undefined1 in_vr12 [16];
  undefined1 auVar16 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_70 [1];
  undefined1 auStack_60 [96];

  iVar1 = **(int **)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x1a0);
  if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0x14) != 0)) {
    uVar9 = 0xffffffff821b181c;
  }
  else {
    uVar9 = 0xffffffff821b17fc;
  }
  fn_8243D2D8((ulonglong)*(uint *)(*(int *)(iVar2 + 0xc) + 0x174) + 8,uVar9,0,0);
  if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
     (bVar8 = true, *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
    bVar8 = false;
  }
  if (*(int *)((!bVar8 + 0xe) * 0x2c + *(int *)(iVar1 + 0x118) + 0x18) != 1) {
    fn_8234C320(1);
  }
  fn_82230110(auStack_60,0xffffffff821b183c);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,(uint)!bVar8,auStack_60);
  fn_82230300(auStack_60,1,0);
  iVar2 = **(int **)(param_1 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x1a0);
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 != 0) {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    iVar5 = (int)in_r0;
    if (*(int *)(iVar3 + 0x14) == 0) {{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar16, &_vt0, 16); }
      loadVectorLeftIndexed128(in_r0,0xffffffff82192800);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar17,auVar16,3,2); memcpy(auVar16, &_vt2, 16); }
      memcpy((void *)((const void *)((uint)(auStack_70 + iVar5) & 0xfffffff0)), auVar16, 16);
    }
    else {{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar17, &_vt3, 16); }
      loadVectorLeftIndexed128(0xffffffff821954b0,0x40c);{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(auVar16,auVar17,3,2); memcpy(auVar16, &_vt5, 16); }
      memcpy((void *)((const void *)((uint)(auStack_70 + iVar5) & 0xfffffff0)), auVar16, 16);
    }
    puVar6 = (undefined4 *)((uint)(auStack_70 + iVar5) & 0xfffffff0);
    uVar13 = puVar6[1];
    uVar14 = puVar6[2];
    uVar15 = puVar6[3];
    iVar2 = *(int *)(iVar2 + 0x11c);
    uVar11 = 0;
    piVar10 = (int *)(iVar2 + 0x10);
    do {
      if (*piVar10 == **(int **)(iVar4 + 4)) {
        puVar7 = (undefined4 *)(uVar11 * 0x40 + iVar2 + 0x30 & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar13;
        puVar7[2] = uVar14;
        puVar7[3] = uVar15;
        break;
      }
      uVar11 = uVar11 + 1;
      piVar10 = piVar10 + 0x10;
    } while (uVar11 < 2);
  }
  iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar2 != 0) {
    if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
       (cVar12 = '\x01', *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
      cVar12 = '\0';
    }
    cVar12 = (-cVar12 & 5U) + 0xb;
    fn_82F512E8(auStack_70,*(undefined4 *)(iVar2 + 0x20),cVar12,2);
    fn_82F52348(*(undefined4 *)(iVar2 + 0x20),cVar12);
    iVar1 = *(int *)(iVar1 + 0x1a0);
    if ((*(int *)(iVar1 + 0x10) == 0) || (bVar8 = true, *(int *)(iVar1 + 0x14) != 0)) {
      bVar8 = false;
    }
    fn_822613B0(*(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x174) + 0x5c) + 0x1ec),
                      *(undefined4 *)(iVar2 + 0x2c),!bVar8);
  }
  return;
}
