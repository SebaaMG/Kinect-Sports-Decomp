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
extern int fn_82E21200();
extern int fn_82E212B0();


undefined8 fn_82E21908(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    fn_82E21200(param_1,0xffffffff8214bd8c);
    fn_82E21200(param_1,param_2);
    fn_82E21200(param_1,0xffffffff8214bd7c);
    fn_82E21200(param_1,param_3);
    fn_82E21200(param_1,0xffffffff8214bd70);
    fn_82E21200(param_1,param_4);
    fn_82E21200(param_1,0xffffffff8214bd64);
  }
  else {
    fn_82E212B0(param_1,0xffffffff8214bde4);
    fn_82E21200(param_1,param_2);
    fn_82E212B0(param_1,0xffffffff8214bdc8);
    fn_82E21200(param_1,param_3);
    fn_82E212B0(param_1,0xffffffff8214bdb0);
    fn_82E21200(param_1,param_4);
    fn_82E212B0(param_1,0xffffffff8214bd9c);
  }
  return 1;
}

