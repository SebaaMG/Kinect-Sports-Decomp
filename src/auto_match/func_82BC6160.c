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
extern int fn_82BC0088();
extern int fn_82BC08A0();
extern int fn_82BC5E78();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82BC6160(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar3;
  undefined4 *puVar2;
  undefined4 uStack0000001c;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uStack0000001c = (int)param_2;
  cVar3 = fn_82BC5E78(iVar1,&stack0x0000001c);
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)fn_82BC0088(iVar1,*(undefined4 *)(iVar1 + 4));
    *puVar2 = (int)param_2;
  }
  fn_82BC08A0(param_2,*(undefined4 *)(param_1 + 0x30),param_3);
  return;
}

