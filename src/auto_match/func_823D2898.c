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
extern int fn_8234B0C8();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823D2898(undefined4 *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  int in_r0;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float afStack_40 [4];
  undefined1 auStack_30 [48];
  
  fVar6 = lbl_821CA460;
  if ((param_3 + 2 != (float *)0x0) && (*(char *)(param_3 + 2) != '\0')) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    puVar4 = (undefined4 *)(param_2 + 0x80U & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    uVar3 = *(uint *)(param_2 + 0x118);
    afStack_40[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    fn_8234B0C8((double)((fVar2 - fVar1) * (afStack_40[0] - fVar6) + fVar1),
                      (ulonglong)uVar3 + 0x2c0);
    param_3 = param_3 + 10;
    if (param_3 == (float *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = *param_3 != 0.0;
    }
    if ((bVar7) && (*(int *)(param_2 + 0x24) == 0)) {
      afStack_40[0] = *param_3;
      afStack_40[0] =
           (float)fn_825354B8(afStack_40,auStack_30,0,*(undefined4 *)*param_1,
                                    0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(afStack_40);
    }
  }
  return;
}

