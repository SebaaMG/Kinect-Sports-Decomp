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
extern int fn_8240D930();
extern int fn_825B5568();
extern int fn_828B2BF8();


void fn_828B2F28(int param_1)

{
  char cVar2;
  int *piVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(param_1 + 0x40));
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}

