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
extern int fn_823400C8();
extern int fn_828EA608();


undefined4 fn_82340CC8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar5;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(*param_1 + 0x10) + 0x74);
  if ((iVar6 == 0) || (cVar5 = fn_828EA608(iVar6), cVar5 == '\0')) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    for (piVar2 = (int *)*puVar1; (piVar2 != (int *)puVar1[1] && (*piVar2 != param_2));
        piVar2 = piVar2 + 7) {
    }
    if (puVar1[7] == 0) {
      iVar3 = fn_823400C8();
    }
    else {
      iVar3 = piVar2[5];
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x100) + iVar3 * 4);
  }
  return uVar4;
}

