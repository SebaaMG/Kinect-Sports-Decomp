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
extern int fn_82FF0250();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821AAD20;


void fn_82FF0F00(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  switch(*param_2) {
  case 0:
    if (((*(byte *)(param_1 + 0xda) & 2) == 0) || (*(char *)(param_2 + 2) == '\0')) {
      *(float *)(param_1 + 0x74) = (float)param_2[4] + *(float *)(param_1 + 0x74);
      iVar3 = fn_82FF0250();
      if ((*(char *)(param_2 + 2) != '\0') && (iVar3 = *(int *)(iVar3 + 0x178), iVar3 != 0)) {
        *(float *)(iVar3 + 8) = (float)param_2[4] + *(float *)(iVar3 + 8);
        return;
      }
    }
    break;
  case 1:
    *(float *)(param_1 + 0x7c) = (float)param_2[4] + *(float *)(param_1 + 0x7c);
    fn_82FF0250();
    return;
  case 2:
switchD_82ff0f2c_caseD_2:
    *(float *)(param_1 + 0x84) = (float)param_2[4] + *(float *)(param_1 + 0x84);
    return;
  case 3:
    *(float *)(param_1 + 0x88) = (float)param_2[4] + *(float *)(param_1 + 0x88);
    return;
  case 8:
    fVar1 = (float)param_2[4];
    fVar2 = (*(float *)(param_1 + 0xe0) + fVar1) - *(float *)(param_1 + 0xdc);
    if (fVar2 < 0.0) {
      fVar2 = lbl_821AAD20;
    }
    if (lbl_82005748 <= fVar2) {
      fVar2 = lbl_82005748;
    }
    *(float *)(param_1 + 0xdc) = fVar2;
    *(float *)(param_1 + 0xe0) = fVar1;
    return;
  case 0x1d:
    iVar3 = *(int *)(param_1 + 0x178);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 4) = (float)param_2[4] + *(float *)(iVar3 + 4);
      return;
    }
    break;
  case 0x1e:
    iVar3 = *(int *)(param_1 + 0x178);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0xc) = (float)param_2[4] + *(float *)(iVar3 + 0xc);
    }
    break;
  case 0x1f:
    if ((*(byte *)(param_1 + 0xda) & 2) != 0) goto switchD_82ff0f2c_caseD_2;
  }
  return;
}

