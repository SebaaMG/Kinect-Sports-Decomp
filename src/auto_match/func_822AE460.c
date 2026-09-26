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
extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_8288D868();


ulonglong fn_822AE460(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined4 *apuStack_40 [16];
  
  piVar6 = (int *)*param_1;
  uVar4 = 1;
  do {
    if ((int *)param_1[1] <= piVar6) {
      return uVar4;
    }
    uVar5 = 1;
    puVar1 = *(undefined4 **)(*(int *)(((int *)*piVar6)[4] * 4 + *(int *)*piVar6) + 4);
    apuStack_40[0] = (undefined4 *)*puVar1;
    while (apuStack_40[0] != puVar1) {
      iVar2 = apuStack_40[0][4];
      if ((*(int *)(iVar2 + 0x168) == 0) ||
         ((cVar3 = fn_8288B760(), cVar3 != '\0' &&
          (cVar3 = fn_8288D868(*(undefined4 *)(iVar2 + 0x168)), cVar3 == '\0')))) {
        uVar5 = 0;
        break;
      }
      fn_82381BC0(apuStack_40);
    }
    piVar6 = piVar6 + 1;
    uVar4 = uVar5 & uVar4;
  } while( true );
}

