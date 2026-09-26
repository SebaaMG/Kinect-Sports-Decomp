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
extern unsigned int *auStack_20;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_824CA518();
extern int fn_824CAA50();
extern int fn_824CAC50();
extern int fn_8265CA20();
extern unsigned int lbl_821C7FB8;


int fn_824C6A00(int param_1)

{
  undefined1 auStack_20 [16];
  
  fn_82359C18(param_1 + 0x98);
  fn_82359C18(param_1 + 0x80);
  *(undefined ***)(param_1 + 0x78) = &lbl_821C7FB8;
  fn_824CA518(param_1 + 100);
  fn_824CAC50(auStack_20,param_1 + 0x54,**(undefined4 **)(param_1 + 0x58));
  fn_8265CA20(*(undefined4 *)(param_1 + 0x58));
  fn_824CAA50(param_1 + 0x44);
  fn_82230300(param_1 + 0x24,1,0);
  fn_82230300(param_1 + 8,1,0);
  if (*(int *)(param_1 + 4) != 0) {
    fn_822315A0();
  }
  fn_8265CA20(param_1);
  return param_1;
}

