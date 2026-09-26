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
extern int fn_8223B930();
extern int fn_82240DB8();
extern int fn_8265C9E0();
extern unsigned int lbl_82196AFC;
extern unsigned int lbl_82196C38;


int fn_82233250(int param_1)

{
  undefined1 *puVar1;
  
  fn_8223B930();
  fn_82240DB8(param_1 + 0x68,2);
  *(undefined ***)(param_1 + 0x68) = &lbl_82196AFC;
  *(undefined4 *)(param_1 + 0x70) = 7;
  *(undefined4 *)(param_1 + 0x78) = 5;
  puVar1 = (undefined1 *)fn_8265C9E0(5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 **)(param_1 + 0x74) = puVar1;
  *(undefined ***)(param_1 + 0x68) = &lbl_82196C38;
  fn_8223B930(param_1 + 0xc0);
  return param_1;
}

