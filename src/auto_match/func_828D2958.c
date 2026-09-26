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
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_828D2958(undefined8 param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  
  bVar3 = true;
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      bVar2 = *(char *)(uVar5 + param_2) != '\0';
      if (bVar3) {
        fn_8223C478(param_1,1,param_4);
        cVar4 = fn_828E9DB8(param_1,!bVar2,1);
        bVar3 = true;
        if (cVar4 == '\0') goto LAB_828d29d4;
      }
      else {
LAB_828d29d4:
        bVar3 = false;
      }
      if (bVar2) {
        if (bVar3) {
          uVar1 = *(undefined1 *)(uVar5 + param_2);
          fn_8223C478(param_1,8,param_4);
          cVar4 = fn_828E9DB8(param_1,uVar1,8);
          bVar3 = true;
          if (cVar4 != '\0') goto LAB_828d2a30;
        }
        bVar3 = false;
      }
LAB_828d2a30:
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  return;
}

