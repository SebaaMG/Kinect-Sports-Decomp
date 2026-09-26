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
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D98C0();


undefined4 * fn_827D6E18(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puStack00000014;
  
  *param_1 = 0;
  param_1[1] = 0;
  puStack00000014 = param_1;
  fn_8256DE08(param_1,0);
  RtlEnterCriticalSection(param_2 + 0x6c);
  puVar2 = *(undefined4 **)(param_2 + 0x44);
  do {
    if (puVar2 == *(undefined4 **)(param_2 + 0x48)) {
LAB_827d6e9c:
      RtlLeaveCriticalSection(param_2 + 0x6c);
      return param_1;
    }
    iVar1 = fn_827D98C0(*puVar2);
    if (iVar1 == param_3) {
      fn_82517A50(param_1,puVar2);
      goto LAB_827d6e9c;
    }
    puVar2 = puVar2 + 2;
  } while( true );
}

