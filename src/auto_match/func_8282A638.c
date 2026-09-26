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
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern int fn_8282D818();
extern unsigned int iStack_3c;


void fn_8282A638(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  char cVar5;
  int iVar4;
  undefined4 *puStack_40;
  int iStack_3c;
  int *apiStack_38 [14];
  
  iVar4 = param_1 + 0x2fc;
  while (fn_828223C8(iVar4,&iStack_3c), iStack_3c != 0) {
    iVar4 = iStack_3c;
    if ((((*(int **)(iStack_3c + 0x48))[1] - **(int **)(iStack_3c + 0x48)) / 0x14 != 0) &&
       (*(char *)(iStack_3c + 0x54) != '\0')) {
      uVar1 = *(undefined4 *)(iStack_3c + 0xc);
      piVar2 = *(int **)(*(int *)(iStack_3c + 0x4c) + 4);
      piVar3 = (int *)*piVar2;
      while (iStack_3c = iVar4, apiStack_38[0] = piVar3, piVar3 != piVar2) {
        fn_8282D818(param_1,&puStack_40,0xc,1);
        *puStack_40 = uVar1;
        puStack_40[1] = *(undefined4 *)(piVar3[3] + 0xc);
        puStack_40[2] = piVar3[4];
        cVar5 = fn_82827750(param_1);
        if (cVar5 != '\0') {
          fn_82820EF8(puStack_40 + 2,4);
          fn_82820EF8(puStack_40,4);
          fn_82820EF8(puStack_40 + 1,4);
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        fn_82381BC0(apiStack_38);
        piVar3 = apiStack_38[0];
        iVar4 = iStack_3c;
      }
    }
  }
  return;
}

