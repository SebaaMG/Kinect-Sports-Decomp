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
extern int fn_82FA6408();
extern int fn_82FA6668();
extern unsigned int lbl_83264210;


undefined8 fn_82FA5190(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar2 = param_1 * 0x50 + lbl_83264210;
    RtlEnterCriticalSection(iVar2 + 0x24);
    iVar1 = fn_82FA6408(param_2);
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) - (iVar1 + 8);
    fn_82FA6668(*(undefined4 *)(iVar2 + 0x40),param_2);
    RtlLeaveCriticalSection(iVar2 + 0x24);
  }
  return 1;
}

