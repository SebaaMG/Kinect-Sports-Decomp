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
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_82A1DD38();
extern unsigned int lbl_83265A38;


bool fn_8225B920(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((param_2 & 0xffffffff) << 3);
  bVar1 = *(int *)((int)&lbl_83265A38 + iVar2) <= param_4 << 3;
  if (bVar1) {
    iVar3 = fn_825231B8();
    fn_82A1DD38(*(undefined4 *)(iVar3 + 8),param_3,
                      ((ulonglong)*(uint *)((int)&lbl_83265A38 + iVar2) + 7 & 0xffffffff) >> 3);
    fn_82A1DD38(*(undefined4 *)
                       (*(int *)((int)((param_2 + 0x3c & 0xffffffff) << 2) + param_1) + 8),
                      *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 4));
    fn_82522ED8(iVar3);
  }
  return bVar1;
}

