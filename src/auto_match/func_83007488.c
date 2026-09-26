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
extern int fn_82FA5060();
extern int fn_82FAB9C0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F0;


undefined8 fn_83007488(int *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 uVar6;
  
  if (*(char *)(lbl_832642F0 + 0x4a0) != '\0') {
    if (param_1[0x11] == 0) {
      puVar7 = (undefined2 *)fn_82FA5060(lbl_831BC768,0xc);
      param_1[0x11] = (int)puVar7;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 2) = 0;
      }
      if (param_1[0x11] == 0) {
        return 0x34;
      }
    }
    iVar1 = *(int *)*param_2;
    *param_2 = (int)((int *)*param_2 + 1);
    if (iVar1 != 0) {
      piVar8 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
      if (piVar8 == (int *)0x0) {
        return 2;
      }
      uVar6 = (**(code **)(*piVar8 + 100))(piVar8,param_1[3]);
      (**(code **)(*piVar8 + 8))(piVar8);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      pfVar2 = (float *)*param_2;
      *param_2 = (int)(pfVar2 + 1);
      fVar3 = pfVar2[2];
      fVar4 = pfVar2[1];
      fVar5 = *pfVar2;
      *param_2 = (int)(pfVar2 + 3);
      (**(code **)(*param_1 + 0x108))((double)fVar5,(double)fVar4,(double)fVar3,param_1);
      pfVar2 = (float *)*param_2;
      *param_2 = (int)(pfVar2 + 1);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      *param_2 = (int)(pfVar2 + 3);
      (**(code **)(*param_1 + 0x11c))((double)fVar3,(double)fVar4,(double)fVar5,param_1);
    }
  }
  return 1;
}

