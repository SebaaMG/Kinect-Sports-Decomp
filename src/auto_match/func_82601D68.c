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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82601D68(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  undefined1 in_vs32 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 in_vr10 [16];
  undefined1 auVar8 [16];
  undefined1 in_vr11 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr13 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar1 = (undefined4 *)((int)in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  lbl_83265A28 = ((lbl_83265A28 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f) * 0x19660d +
                 0x3c6ef35f;
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x10);
  loadVectorLeftIndexed128(in_r0,uVar3 - 0xc);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(in_r0,uVar3 - 8); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3); memcpy(auVar8, &_vt2, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar8,auVar9,3,2);
  vectorAddFloatingPoint(in_vs32,auVar4);
  puVar2 = (undefined4 *)((int)in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return;
}

