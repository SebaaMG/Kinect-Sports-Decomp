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
extern unsigned int *auStack_3c;
extern int fn_82A8B1E8();
extern int fn_83142FAC();
extern unsigned int uStack_40;


bool fn_82A8B288(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar4;
  int iVar3;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uStack_40;
  undefined1 auStack_3c [60];
  
  puVar5 = (uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if ((*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) &&
       (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x18) + 0x8000)) {
      return true;
    }
  }
  piVar7 = (int *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x18)) {
    cVar4 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    if (cVar4 == '\0') {
      return false;
    }
    *puVar5 = 0;
    *piVar7 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  puVar6 = (uint *)(param_1 + 0x14);
  while( true ) {
    cVar4 = fn_82A8B1E8(*(undefined4 *)(param_1 + 4),puVar6,piVar7,puVar5);
    if (cVar4 == '\0') {
      return false;
    }
    uVar1 = *puVar6;
    if (0x9800 < uVar1) {
      return false;
    }
    if (0x8000 < *puVar5) {
      return false;
    }
    piVar2 = *(int **)(param_1 + 4);
    if (*(uint *)(param_1 + 0x10) <= *piVar7 + 0x8000U) break;
    (**(code **)(*piVar2 + 0xc))(piVar2,uVar1);
  }
  cVar4 = (**(code **)(*piVar2 + 0x10))
                    (piVar2,(ulonglong)*(uint *)(param_1 + 8) + 0x8000,uVar1,auStack_3c);
  if (cVar4 != '\0') {
    uStack_40 = *puVar5;
    iVar3 = LDIDecompress(*(undefined4 *)(param_1 + 0xc),(ulonglong)*(uint *)(param_1 + 8) + 0x8000,
                          *puVar6,(ulonglong)*(uint *)(param_1 + 8),&uStack_40);
    if (iVar3 == 0) {
      iVar3 = fn_83142FAC(*(undefined4 *)(param_1 + 0xc));
      return iVar3 == 0;
    }
  }
  return false;
}

