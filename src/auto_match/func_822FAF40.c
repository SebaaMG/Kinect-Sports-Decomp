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
extern int fn_8233EB88();
extern int fn_8257A9F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822FAF40(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint auStack_30 [6];
  
  puVar8 = param_1 + 1;
  fn_8233EB88(auStack_30,puVar8,param_1[1],param_1[2]);
  auStack_30[0] = 0;
  if (*param_1 != 0) {
    do {
      fn_8257A9F0(puVar8,auStack_30);
      auStack_30[0] = auStack_30[0] + 1;
    } while (auStack_30[0] < *param_1);
  }
  fVar5 = lbl_821CA460;
  puVar1 = (undefined4 *)param_1[2];
  puVar2 = (undefined4 *)*puVar8;
  if (puVar2 != puVar1) {
    iVar7 = 2;
    puVar4 = puVar2;
    while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar3 = *puVar4;
      iVar6 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar5) * (float)(longlong)iVar7
                   );
      iVar6 = iVar6 - (iVar6 / iVar7) * iVar7;
      iVar7 = iVar7 + 1;
      *puVar4 = puVar2[iVar6];
      puVar2[iVar6] = uVar3;
    }
  }
  return;
}

