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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


undefined4 fn_82767170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 8 + *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                     (*(int *)((iVar2 + 7U >> 10 & 0x3ffffc) + iVar1) +
                                     (iVar2 + 7U & 0xfff)),
                                    *(undefined1 *)
                                     (*(int *)((iVar2 + 6U >> 10 & 0x3ffffc) + iVar1) +
                                     (iVar2 + 6U & 0xfff))),
                           *(undefined1 *)
                            (*(int *)((iVar2 + 5U >> 10 & 0x3ffffc) + iVar1) + (iVar2 + 5U & 0xfff))
                          ),
                  *(undefined1 *)
                   (*(int *)((iVar2 + 4U >> 10 & 0x3ffffc) + iVar1) + (iVar2 + 4U & 0xfff)));
}

