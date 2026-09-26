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
extern int fn_8255E428();
extern unsigned int lbl_831D4A40;
extern unsigned int lbl_831D4C80;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82502F18(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  undefined1 auStack_70 [112];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x8c0) != 0)) {
    if (*(char *)(param_1 + 0xb74) == '\0') {
      piVar6 = &lbl_831D4A40;
    }
    else {
      piVar6 = &lbl_831D4C80;
    }
    uVar5 = 0;
    do {
      if (*piVar6 == param_2) {
        if ((*(int *)(param_1 + 0x8c0) == 0) ||
           (piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4), piVar1 == (int *)0x0)) {
          iVar4 = -1;
        }
        else {
          iVar4 = (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined2 *)(piVar6 + 1));
        }
        iVar3 = (int)in_r0;
        if (iVar4 != -1) {
          fn_8255E428(auStack_70,param_1);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs42); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs41,auVar7); memcpy(auVar7, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs45,auVar7); memcpy(auVar7, &_vt2, 16); }
          vectorConditionalSelect(auVar7,in_vs32,in_vs44);
          puVar2 = (undefined4 *)(iVar3 + param_3 & 0xfffffff0);
          *puVar2 = in_register_00010430;
          puVar2[1] = in_register_00010434;
          puVar2[2] = in_register_00010438;
          puVar2[3] = in_vr67;
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 8;
    } while (uVar5 < 0x12);
  }
  return 0;
}

