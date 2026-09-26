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
extern int fn_82518FF0();
extern int fn_828223C8();
extern unsigned int iStack_30;


void fn_828274C8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iStack_30;
  undefined4 *apuStack_2c [11];
  
  param_1 = param_1 + 0x2f4;
  iVar2 = 0;
  do {
    fn_828223C8(param_1,&iStack_30);
    param_1 = iStack_30;
    if (iStack_30 == 0) {
      *param_2 = iVar2;
      return;
    }
    puVar1 = *(undefined4 **)(*(int *)(iStack_30 + 0x28) + 4);
    apuStack_2c[0] = (undefined4 *)*puVar1;
    while (apuStack_2c[0] != puVar1) {
      if (apuStack_2c[0][5] != 0) {
        iVar2 = iVar2 + 1;
        break;
      }
      fn_82518FF0(apuStack_2c);
    }
  } while( true );
}

