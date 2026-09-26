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
extern int fn_823E2D30();
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern int fn_8282D818();
extern unsigned int iStack_3c;


void fn_82832768(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar4;
  int iVar3;
  undefined4 *puVar5;
  undefined4 *puStack_40;
  int iStack_3c;
  int *apiStack_38 [14];
  
  iVar3 = param_1 + 0x2fc;
  while (fn_828223C8(iVar3,&iStack_3c), iStack_3c != 0) {
    iVar3 = iStack_3c;
    if ((((*(int **)(iStack_3c + 0x48))[1] - **(int **)(iStack_3c + 0x48)) / 0x14 != 0) &&
       (*(char *)(iStack_3c + 0x54) != '\0')) {
      piVar1 = *(int **)(*(int *)(iStack_3c + 0x50) + 4);
      apiStack_38[0] = (int *)*piVar1;
      if (apiStack_38[0] != piVar1) {
        puVar5 = (undefined4 *)(iStack_3c + 0xc);
        do {
          piVar2 = apiStack_38[0];
          fn_8282D818(param_1,&puStack_40,0x14,1);
          puStack_40[3] = piVar2[4];
          puStack_40[4] = piVar2[5];
          *puStack_40 = *puVar5;
          puStack_40[2] = piVar2[3];
          puStack_40[1] = piVar2[6];
          cVar4 = fn_82827750(param_1);
          if (cVar4 != '\0') {
            fn_82820EF8(puStack_40 + 1,4);
            fn_82820EF8(puStack_40 + 3,4);
            fn_82820EF8(puStack_40,4);
            fn_82820EF8(puStack_40 + 4,4);
            fn_82820EF8(puStack_40 + 2,4);
          }
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          fn_823E2D30(apiStack_38);
          iVar3 = iStack_3c;
        } while (apiStack_38[0] != piVar1);
      }
    }
  }
  return;
}

