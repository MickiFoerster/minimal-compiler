#ifndef _YYSTYPE_H_
#define _YYSTYPE_H_

void info(const char *s, ...);

extern bool verbose_mode;
extern int yylineno;
extern void yyerror(const char *s, ...);
extern int yylex(void);

#define YYSTYPE std::string*


const std::string sigma_assign(const std::string& lhs, const std::string& rhs);
const std::string sigma_if(const std::string& cond, const std::string& S);
const std::string sigma_while(const std::string& cond, const std::string& S);


#endif
