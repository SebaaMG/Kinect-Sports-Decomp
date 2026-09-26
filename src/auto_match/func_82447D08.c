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
extern int fn_8255AE78();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82447D08(undefined8 param_1,int param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_vr0 [16];
  undefined4 uVar9;
  undefined1 auVar6 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1[((param_4 & 0xff) + 0xc) * 0xc] == 0) {{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x20); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(in_r0,0xffffffff821cc160); memcpy(auVar4, &_vt1, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3);{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar6, &_vt2, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar6,3,2);
    fn_8255AE78((double)*(float *)(*(int *)(*(int *)(*piVar1 + 0x174) + 4) + 0x10));
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 4) + 0x20U & 0xfffffff0);
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    vectorAddFloatingPoint(auVar3,auVar4);
  }
  else {
    puVar2 = (undefined4 *)((uint)(piVar1 + (param_4 & 0xff) * 0xc + 0x94) & 0xfffffff0);
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
  }
  puVar2 = (undefined4 *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return param_1;
}

