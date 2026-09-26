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
extern int fn_82D01190();


void fn_82D01370(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  fn_82D01190();
  fn_82D01190(param_2);
  puVar4 = (uint *)*param_1;
  puVar3 = (uint *)*param_2;
  puVar2 = puVar4 + param_1[2];
  puVar1 = puVar3 + param_2[2];
  do {
    while( true ) {
      if ((puVar2 <= puVar4) || (puVar1 <= puVar3)) {
        return;
      }
      if (*puVar4 != *puVar3) break;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
LAB_82d013e4:
      puVar3 = puVar3 + 1;
    }
    if (*puVar3 <= *puVar4) goto LAB_82d013e4;
    puVar4 = puVar4 + 1;
  } while( true );
}

