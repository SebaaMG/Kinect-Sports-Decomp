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
extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_82259410(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = (char *)(param_4 + 8);
  if (4 < *(uint *)(param_4 + 0xc)) {
    pcVar5 = *(char **)(param_4 + 8);
  }
  iVar2 = 0;
  for (pcVar3 = pcVar5; pcVar3 != pcVar5 + 5; pcVar3 = pcVar3 + 1) {
    if (*pcVar3 == '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  fn_8223C200(param_3,iVar2 == 5,0);
  if (iVar2 != 5) {
    uVar4 = 0;
    do {
      cVar1 = pcVar5[uVar4];
      fn_8223C200(param_3,cVar1 == '\0',0);
      if (cVar1 != '\0') {
        uVar6 = 1;
        if (uVar4 != 4) {
          uVar6 = 8;
        }
        fn_8223C478(param_3,uVar6,0);
        fn_828E9DB8(param_3,cVar1,uVar6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 5);
  }
  return;
}

