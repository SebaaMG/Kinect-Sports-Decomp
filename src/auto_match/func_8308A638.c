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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int lbl_82132D10;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8308A638(int *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 auVar3 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000101f0;
  undefined4 in_register_000101f4;
  undefined4 in_register_000101f8;
  undefined4 in_vr31;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  (*pcVar1)(param_1,auStack_40,auStack_30);{ V16 _vt0 = vectorAddFloatingPoint(in_vs42,in_vs43); memcpy(auVar4, &_vt0, 16); }
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x40 & 0xfffffff0);
  *puVar2 = in_register_00010090;
  puVar2[1] = in_register_00010094;
  puVar2[2] = in_register_00010098;
  puVar2[3] = in_vr9;
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])((uint)(param_1 + 0x18) & 0xfffffff0),
             *(undefined1 (*) [16])((uint)(&lbl_82132D10 + in_r0) & 0xfffffff0),1,0);{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(in_vs40); memcpy(auVar3, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(auVar3,in_vs40,in_vs42); memcpy(auVar5, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar3); memcpy(auVar3, &_vt3, 16); }
  vectorAddFloatingPoint(auVar4,auVar3);
  puVar2 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = in_register_00010060;
  puVar2[1] = in_register_00010064;
  puVar2[2] = in_register_00010068;
  puVar2[3] = in_vr6;{ V16 _vt4 = vectorAddFloatingPoint(in_vs37,in_vs43); memcpy(auVar4, &_vt4, 16); }
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x70 & 0xfffffff0);
  *puVar2 = in_register_00010040;
  puVar2[1] = in_register_00010044;
  puVar2[2] = in_register_00010048;
  puVar2[3] = in_vr4;
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])((uint)(param_1 + 0x24) & 0xfffffff0),
             *(undefined1 (*) [16])((uint)(&lbl_82132D10 + in_r0) & 0xfffffff0),1,0);{ V16 _vt5 = vectorReciprocalEstimateFloatingPoint(in_vs35); memcpy(auVar3, &_vt5, 16); }{ V16 _vt6 = vectorNegativeMultiplySubtractFloatingPoint(auVar3,in_vs35,auVar5); memcpy(auVar5, &_vt6, 16); }{ V16 _vt7 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar3); memcpy(auVar3, &_vt7, 16); }
  vectorAddFloatingPoint(auVar4,auVar3);
  puVar2 = (undefined4 *)((uint)(param_1 + 0x20) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = in_register_000101f0;
  puVar2[1] = in_register_000101f4;
  puVar2[2] = in_register_000101f8;
  puVar2[3] = in_vr31;
  return;
}

