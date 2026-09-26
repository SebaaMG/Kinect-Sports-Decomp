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
extern int fn_8253FDC8();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255ACE0(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vr0 [16];
  undefined1 in_vr3 [16];
  undefined1 in_vr4 [16];
  undefined1 auVar8 [16];
  undefined1 in_vr5 [16];
  undefined1 in_vr11 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar11 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  uVar4 = fn_8253FDC8((double)*param_1,param_1,uVar3 - 0x40,uVar3 - 0x3c);
  uVar4 = fn_8253FDC8((double)fVar1,uVar4,uVar3 - 0x50,uVar3 - 0x44);
  fn_8253FDC8((double)fVar2,uVar4,uVar3 - 0x48,uVar3 - 0x4c);
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x44);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,uVar3 - 0x40); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(in_r0,uVar3 - 0x40); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = loadVectorLeftIndexed128(in_r0,uVar3 - 0x44); memcpy(auVar5, &_vt2, 16); }
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x3c);{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar9, &_vt3, 16); }{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr5,4,3); memcpy(auVar11, &_vt4, 16); }
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x3c);{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(in_vr4,in_vr11,4,3); memcpy(auVar8, &_vt5, 16); }{ V16 _vt6 = vectorRotateLeftImmediateMaskInsert128(auVar9,in_vr5,4,3); memcpy(auVar10, &_vt6, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar11,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar11,auVar10,3,2);
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x40);{ V16 _vt7 = loadVectorLeftIndexed128(in_r0,uVar3 - 0x3c); memcpy(auVar9, &_vt7, 16); }{ V16 _vt8 = vectorMultiplyAddFloatingPoint(auVar5,in_vs40,in_vs42); memcpy(auVar5, &_vt8, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar8,auVar10,4,3);
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x44);{ V16 _vt9 = vectorRotateLeftImmediateMaskInsert128(in_vr3,in_vr5,4,3); memcpy(auVar8, &_vt9, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar10,auVar8,3,2);{ V16 _vt10 = vectorMultiplyAddFloatingPoint(in_vs39,auVar9,auVar5); memcpy(auVar5, &_vt10, 16); }{ V16 _vt11 = vectorMultiplyAddFloatingPoint(in_vs38,auVar7,auVar5); memcpy(auVar5, &_vt11, 16); }
  vectorConditionalSelect(auVar5,auVar6,in_vs41);
  return;
}

