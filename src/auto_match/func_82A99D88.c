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
extern int fn_82A99B70();


void fn_82A99D88(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  fn_82A99B70(param_1,0xffffffff820d288c,param_2);
  if (*param_3 != '\0') {
    do {
      cVar1 = *param_3;
      if (cVar1 == '\"') {
        uVar3 = 0xffffffff82005c50;
LAB_82a99e58:
        fn_82A99B70(param_1,uVar3);
      }
      else {
        if (cVar1 == '&') {
          uVar2 = 0xffffffff82005c60;
        }
        else {
          uVar2 = 0xffffffff82005c58;
          if (((cVar1 != '\'') && (uVar2 = 0xffffffff82005c40, cVar1 != '<')) &&
             (uVar2 = 0xffffffff82005c48, uVar3 = 0xffffffff821ce318, cVar1 != '>'))
          goto LAB_82a99e58;
        }
        fn_82A99B70(param_1,uVar2);
      }
      param_3 = param_3 + 1;
    } while (*param_3 != '\0');
  }
  fn_82A99B70(param_1,0xffffffff8200c4f8);
  return;
}

