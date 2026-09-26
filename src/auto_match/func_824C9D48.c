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
extern int fn_82230360();
extern int fn_824C7510();
extern int fn_824C9FB8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_824C9D48(undefined4 *param_1,char *param_2)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  undefined4 *puVar7;
  float *pfVar8;
  
  iVar4 = fn_824C9FB8();
  pcVar6 = param_2;
  if (iVar4 != 0) {
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    fn_82230360(param_1 + 2,param_2,pcVar6 + (-1 - (int)param_2));
    puVar7 = (undefined4 *)(iVar4 + 0x1c);
    if (0xf < *(uint *)(iVar4 + 0x30)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    fn_824C7510(*param_1,puVar7);
    fVar3 = lbl_821CA460;
    pfVar2 = *(float **)(iVar4 + 0x4c);
    if (*(float **)(iVar4 + 0x48) != pfVar2) {
      pfVar8 = *(float **)(iVar4 + 0x48) + 8;
      do {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        pfVar8[-1] = (pfVar8[1] - *pfVar8) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar3)
                     + *pfVar8;
        pfVar5 = pfVar8 + 4;
        pfVar8 = pfVar8 + 0xc;
      } while (pfVar5 != pfVar2);
    }
  }
  return;
}

