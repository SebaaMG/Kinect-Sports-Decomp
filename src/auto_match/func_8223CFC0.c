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
extern int fn_8223CD08();
extern int fn_8223CF38();
extern unsigned int lbl_82020F38;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


int * fn_8223CFC0(int *param_1,ulonglong param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (int)&lbl_821AA8E0;
    param_1[0x14] = (int)&lbl_82020F38;
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_82020F40;
  fn_8223CD08(*(int *)(*param_1 + 4) + (int)param_1,param_1 + 1,0);
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_82021284;
  fn_8223CF38(param_1 + 1,param_2 | 2);
  return param_1;
}

